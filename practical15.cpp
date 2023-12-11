#include<iostream>
using namespace std;
#define MAX 50
class Job{
    private:
    int head,tail;
    int job[MAX];
    public:
    Job(){
        head=-1;
        tail=-1;
    }
    //check if the queue is full
    bool isfull()const{
        return tail==MAX-1;
    }
    //check if the queue is empty
    bool isempty()const{
    return head==-1;
    }
    //Add a job back to the queue
    void Addjob(int job_num){
        if (isfull()){
            cout<<"Queue is full!cannot add a job"<<job_num<<endl;
        }
        else{
            if(isempty()){
                head=0;
            }
            job[++tail]=job_num;
            cout<<"job"<<job_num<<"added to the queue"<<endl;
        }
        }
    int rem_job(){
        if(isempty()){
            cout<<"queue is empty!no job to delete";
            return -1;
        }
        else{
            int rem_job=job[head++];
            cout<<"job"<<rem_job<<"removed from the queue"<<endl;
            if(head>tail){
                head=tail=-1;
            }
            return rem_job;
        }
    }
    void disp_queue(){
        if(isempty()){
            cout<<"queue is empty";
        }
        else{
            cout<<"job queue:";
            for (int i=head; i<=tail;++i){
                cout<<job[i]<<" ";
            }
            cout<<endl;
        }
    }

    };
    int main(){
        Job queue;
        int choice,job_num;
    do{
        cout<<"\njob queue operations:"<<endl;
        cout<<"1.add a job"<<endl;
        cout<<"2.remove a job"<<endl;
        cout<<"3.display the queue"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"enter the job number:"<<endl;
            cin>>job_num;
            queue.Addjob(job_num);
            break;
            case2:
            queue.rem_job();
            break;
            case3:
            queue.disp_queue();
            break;
            casse4:
            cout<<"exiting program"<<endl;
            break;
        default:
            cout<<"invalid choice. please enter a valid option"<<endl;
        }
        }while(choice !=4);
        return 0;
    }