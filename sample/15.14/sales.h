#ifndef SALES_H_INCLUDED
#define SALES_H_INCLUDED

#include <string>
#include <stdexcept>

class Sales
{
public:
    enum {MONTHS = 12};
    class bad_index : public std::logic_error
    {
    private:
        int bi;
    public:
        explicit bad_index(int ix, const std::string &s = "Index error in Sales object\n");
        int  bi_val() const { return bi;}
        virtual ~bad_index() throw() {}
    };
    explicit Sales(int yy=0);
    Sales(int yy, const double *gr, int n);
    virtual ~Sales() {}
    int Year() const { return year; }
    virtual double operator[](int i) const;
    virtual double & operator[](int i);
private:
    double gross[MONTHS];
    int year;
};

class LabelSales : public Sales
{
public:
    class nbad_index : public Sales::bad_index
    {
    private:
        std::string lbl;
    public:
        nbad_index(const std::string &lb, int ix, const std::string &s = "Index error in LabelSales object\n");
        const std::string &label_val() const { return lbl; }
        virtual ~nbad_index() throw() {}
    };
    explicit LabelSales(const std::string &lb = "none", int yy = 0);
    LabelSales(const std::string &lb, int yy, const double *gr, int n);
    virtual ~LabelSales() {}
    const std::string &Label() const { return label; }
    virtual double operator[](int i) const;
    virtual double &operator[](int i);
private:
    std::string label;
};

#endif // SALES_H_INCLUDED
