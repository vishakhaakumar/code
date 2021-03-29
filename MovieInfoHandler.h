#ifndef MOVIES_MICROSERVICES_MOVIEINFOHANDLER_H
#define MOVIES_MICROSERVICES_MOVIEINFOHANDLER_H

#include <iostream>
#include <string>
#include <regex>
#include <future>

#include "../../gen-cpp/MovieInfoService.h"

#include "../ClientPool.h"
#include "../ThriftClient.h"
#include "../logger.h"

namespace movies{

class MovieInfoServiceHandler : public MovieInfoServiceIf {
 public:
  MovieInfoServiceHandler();
  ~MovieInfoServiceHandler() override=default;

  void GetMoviesByIds(std::vector<std::string>& _return, const std::vector<std::string> & movie_ids) override;
  void GetMoviesByName(std::vector<std::string>& _return, const int64_t title) override;
};

// Constructor
MovieInfoServiceHandler::MovieInfoServiceHandler() {

}

// Remote Procedure "GetMoviesById"

void MovieInfoServiceHandler::GetMoviesByIds(std::vector<std::string>& _return, const std::vector<std::string> & movie_ids) {
   _return.push_back("Muppets Take Manhattan");
   _return.push_back("The Lion King");
}

void MovieInfoServiceHandler::GetMoviesByName(std::vector<std::string>& _return, const int64_t title){
    printf("GetMoviesByName\n");
	_return.push_back("The Lion Kingiii");	
	
}

} // namespace movies


#endif //MOVIES_MICROSERVICES_MOVIEINFOHANDLER_H

