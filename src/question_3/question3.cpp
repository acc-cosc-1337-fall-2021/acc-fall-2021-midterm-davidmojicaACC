#include "question3.h"
using std::vector;
bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int cookies)
{
    double sugar;
    double butter;
    double flour;
    vector<double> ingredients;
    sugar = cookies / 32.;
    butter = cookies / 48.;
    flour = cookies / (192./11.);
    ingredients.push_back(sugar);
    ingredients.push_back(butter);
    ingredients.push_back(flour);
    
    return ingredients;

}