class LarmComponents
{
    private:
int component_id;
int customer_id;
bool  is_activeComponent;
bool is_ConnectedComponent;

    public:
    LarmComponents(int customer_id) : customer_id(customer_id){
        
    }
};