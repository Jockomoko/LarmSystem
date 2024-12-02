class LarmComponent
{
    private:
int component_id;
int customer_id;
bool  is_activeComponent;
bool is_ConnectedComponent;

    public:
    LarmComponent(int customer_id) : customer_id(customer_id){
        
    }
};
