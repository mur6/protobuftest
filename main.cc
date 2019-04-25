#include <iostream>
#include "google/protobuf/util/json_util.h"
#include "user.pb.h"
using namespace std;

int main(int argc, char const *argv[])
{

    userdb::User u1;

    u1.set_id("abc");
    u1.set_pw("pass1");

    string buf;
    const auto status = google::protobuf::util::MessageToJsonString(u1, &buf);
    //u1.SerializeToString(&serialized_str);

    cout << buf << endl;

    return 0;
}
