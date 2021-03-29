// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "UserLikesService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace  ::movies;

class UserLikesServiceHandler : virtual public UserLikesServiceIf {
 public:
  UserLikesServiceHandler() {
    // Your initialization goes here
  }

  void GetMovieLikesByIds(std::vector<int64_t> & _return, const std::vector<std::string> & movie_ids) {
    // Your implementation goes here
    printf("GetMovieLikesByIds\n");
  }

  void LikeDislikeMovie(const std::string& user_id, const std::string& movie_id, const bool likeDislike) {
    // Your implementation goes here
    printf("LikeDislikeMovie\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::std::shared_ptr<UserLikesServiceHandler> handler(new UserLikesServiceHandler());
  ::std::shared_ptr<TProcessor> processor(new UserLikesServiceProcessor(handler));
  ::std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::std::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::std::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

