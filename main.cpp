#include "ControllerNode.h"
#include "mainwindow.h"

int main(int argc, char **argv){

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();

//    std::cout << "start" << std::endl;
//    ros::init(argc, argv, "controller_node_cpp");
//    ControllerNode node;
//    for(int i = 0; i < 2; i++) {
//        node.MoveTo(2, 2);
//        node.Control();
//        node.MoveTo(-2, 2);
//        node.Control();
//        node.MoveTo(-2, -2);
//        node.Control();
//        node.MoveTo(2, -2);
//        node.Control();
//    }
//    node.Hover();
//    return 0;
}

