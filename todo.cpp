#include<iostream>
#include<string>
#include<list>
#include <ctime>

class TodoItem {
  private:
    int id;
    std::string description;
    bool completed;

  public:
    TodoItem(std::string desc){
      id =  rand() % 100 + 1;
      description = desc;
      completed = false;
    }
    ~TodoItem() = default;

    bool create(std::string new_description){
      id = rand() % 100 + 1;
      description = new_description;
      return true;
    }

    int getId(){ return id; }
    std::string getDescription() { return description; }
    bool isCompleted() { return completed; }
    void setCompleted(bool completion) {
      completed = completion;
    }
};

int main()
{
    char user_menu_option;
    int input_id;
    std::string input_description;
    std::string version = "v0.1.2";
    std::cout << "Todo app";
    std::list<TodoItem> todoItems;
    std::list<TodoItem>::iterator it;

    srand(time(NULL));
    todoItems.clear();

    TodoItem item1("A sample description");
    TodoItem item2("A sample description");
    TodoItem item3("A sample description");
    
    todoItems.push_back(item1);
    todoItems.push_back(item2);
    todoItems.push_back(item3);


    while (1)
    {
      system("cls");
      std::cout << "Todo list - " << version << std::endl;

      std::cout << "=============================================" << std::endl;

      if(todoItems.empty()){
        std::cout << "Add your first todo!" << std::endl;
      }
      for(it = todoItems.begin(); it != todoItems.end(); it++){
        std::string completed = it->isCompleted() ? "True": "False";
        std::cout << it->getId() << " | " << it->getDescription() << " | " << completed << std::endl;
        int todoItemsLength = todoItems.size();
        int last_child_id = todoItems.back().getId();
      
        if (todoItems.size() > 1 && it->getId() != last_child_id)
        {
          std::cout << "......................................." << std::endl;
        }
      }
      std::cout << "=============================================" << std::endl;


      std::cout << "--------------------------------" << std::endl;
      std::cout << "[a]dd a new Todo" << std::endl;
      std::cout << "[c]omplete a Todo" << std::endl;
      std::cout << "[q]uit" << std::endl;
      std::cout << "--------------------------------" << std::endl;

      std::cout << "Input you option: ";
      std::cin >> user_menu_option;

      if(user_menu_option == 'q'){
        std::cout << "********** See you later **********"<< std::endl;
        break;
      }else if(user_menu_option == 'a'){

          std::cout << "Input item description => ";
          std::cin.clear();
          std::cin.ignore();
          std::getline(std::cin, input_description);

          TodoItem new_item(input_description);
          todoItems.push_back(new_item);

          std::cout << "Item added" << std::endl;

      }else if(user_menu_option == 'c'){
          std::cout << "Enter id to mark completed => ";
          std::cin.clear();
          std::cin.ignore();
          std::cin >> input_id;

        for(it = todoItems.begin(); it != todoItems.end(); it++){
          std::cout << it->getId() << std::endl;
          std::cout << input_id << std::endl;
          if ((int)input_id == it->getId()){
            it->setCompleted(true);
            break;
          }
        }
      }else{
        std::cout << "******" << std::endl;
        std::cout << "you inputed a wrong value a " << std::endl;
        std::cout << "******" << std::endl;
      }


    }

  return 0;
}