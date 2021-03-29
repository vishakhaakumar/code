/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "UserLikesService.h"

namespace movies {


UserLikesService_GetMovieLikesByIds_args::~UserLikesService_GetMovieLikesByIds_args() noexcept {
}


uint32_t UserLikesService_GetMovieLikesByIds_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->movie_ids.clear();
            uint32_t _size43;
            ::apache::thrift::protocol::TType _etype46;
            xfer += iprot->readListBegin(_etype46, _size43);
            this->movie_ids.resize(_size43);
            uint32_t _i47;
            for (_i47 = 0; _i47 < _size43; ++_i47)
            {
              xfer += iprot->readString(this->movie_ids[_i47]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.movie_ids = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UserLikesService_GetMovieLikesByIds_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserLikesService_GetMovieLikesByIds_args");

  xfer += oprot->writeFieldBegin("movie_ids", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->movie_ids.size()));
    std::vector<std::string> ::const_iterator _iter48;
    for (_iter48 = this->movie_ids.begin(); _iter48 != this->movie_ids.end(); ++_iter48)
    {
      xfer += oprot->writeString((*_iter48));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserLikesService_GetMovieLikesByIds_pargs::~UserLikesService_GetMovieLikesByIds_pargs() noexcept {
}


uint32_t UserLikesService_GetMovieLikesByIds_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserLikesService_GetMovieLikesByIds_pargs");

  xfer += oprot->writeFieldBegin("movie_ids", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*(this->movie_ids)).size()));
    std::vector<std::string> ::const_iterator _iter49;
    for (_iter49 = (*(this->movie_ids)).begin(); _iter49 != (*(this->movie_ids)).end(); ++_iter49)
    {
      xfer += oprot->writeString((*_iter49));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserLikesService_GetMovieLikesByIds_result::~UserLikesService_GetMovieLikesByIds_result() noexcept {
}


uint32_t UserLikesService_GetMovieLikesByIds_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->success.clear();
            uint32_t _size50;
            ::apache::thrift::protocol::TType _etype53;
            xfer += iprot->readListBegin(_etype53, _size50);
            this->success.resize(_size50);
            uint32_t _i54;
            for (_i54 = 0; _i54 < _size50; ++_i54)
            {
              xfer += iprot->readI64(this->success[_i54]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UserLikesService_GetMovieLikesByIds_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("UserLikesService_GetMovieLikesByIds_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_LIST, 0);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->success.size()));
      std::vector<int64_t> ::const_iterator _iter55;
      for (_iter55 = this->success.begin(); _iter55 != this->success.end(); ++_iter55)
      {
        xfer += oprot->writeI64((*_iter55));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserLikesService_GetMovieLikesByIds_presult::~UserLikesService_GetMovieLikesByIds_presult() noexcept {
}


uint32_t UserLikesService_GetMovieLikesByIds_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            (*(this->success)).clear();
            uint32_t _size56;
            ::apache::thrift::protocol::TType _etype59;
            xfer += iprot->readListBegin(_etype59, _size56);
            (*(this->success)).resize(_size56);
            uint32_t _i60;
            for (_i60 = 0; _i60 < _size56; ++_i60)
            {
              xfer += iprot->readI64((*(this->success))[_i60]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}


UserLikesService_LikeDislikeMovie_args::~UserLikesService_LikeDislikeMovie_args() noexcept {
}


uint32_t UserLikesService_LikeDislikeMovie_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->user_id);
          this->__isset.user_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->movie_id);
          this->__isset.movie_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->likeDislike);
          this->__isset.likeDislike = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UserLikesService_LikeDislikeMovie_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserLikesService_LikeDislikeMovie_args");

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->user_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("movie_id", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->movie_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("likeDislike", ::apache::thrift::protocol::T_BOOL, 3);
  xfer += oprot->writeBool(this->likeDislike);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserLikesService_LikeDislikeMovie_pargs::~UserLikesService_LikeDislikeMovie_pargs() noexcept {
}


uint32_t UserLikesService_LikeDislikeMovie_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserLikesService_LikeDislikeMovie_pargs");

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->user_id)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("movie_id", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString((*(this->movie_id)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("likeDislike", ::apache::thrift::protocol::T_BOOL, 3);
  xfer += oprot->writeBool((*(this->likeDislike)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserLikesService_LikeDislikeMovie_result::~UserLikesService_LikeDislikeMovie_result() noexcept {
}


uint32_t UserLikesService_LikeDislikeMovie_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UserLikesService_LikeDislikeMovie_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("UserLikesService_LikeDislikeMovie_result");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserLikesService_LikeDislikeMovie_presult::~UserLikesService_LikeDislikeMovie_presult() noexcept {
}


uint32_t UserLikesService_LikeDislikeMovie_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void UserLikesServiceClient::GetMovieLikesByIds(std::vector<int64_t> & _return, const std::vector<std::string> & movie_ids)
{
  send_GetMovieLikesByIds(movie_ids);
  recv_GetMovieLikesByIds(_return);
}

void UserLikesServiceClient::send_GetMovieLikesByIds(const std::vector<std::string> & movie_ids)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("GetMovieLikesByIds", ::apache::thrift::protocol::T_CALL, cseqid);

  UserLikesService_GetMovieLikesByIds_pargs args;
  args.movie_ids = &movie_ids;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void UserLikesServiceClient::recv_GetMovieLikesByIds(std::vector<int64_t> & _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("GetMovieLikesByIds") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  UserLikesService_GetMovieLikesByIds_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "GetMovieLikesByIds failed: unknown result");
}

void UserLikesServiceClient::LikeDislikeMovie(const std::string& user_id, const std::string& movie_id, const bool likeDislike)
{
  send_LikeDislikeMovie(user_id, movie_id, likeDislike);
  recv_LikeDislikeMovie();
}

void UserLikesServiceClient::send_LikeDislikeMovie(const std::string& user_id, const std::string& movie_id, const bool likeDislike)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("LikeDislikeMovie", ::apache::thrift::protocol::T_CALL, cseqid);

  UserLikesService_LikeDislikeMovie_pargs args;
  args.user_id = &user_id;
  args.movie_id = &movie_id;
  args.likeDislike = &likeDislike;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void UserLikesServiceClient::recv_LikeDislikeMovie()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("LikeDislikeMovie") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  UserLikesService_LikeDislikeMovie_presult result;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  return;
}

bool UserLikesServiceProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void UserLikesServiceProcessor::process_GetMovieLikesByIds(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = nullptr;
  if (this->eventHandler_.get() != nullptr) {
    ctx = this->eventHandler_->getContext("UserLikesService.GetMovieLikesByIds", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "UserLikesService.GetMovieLikesByIds");

  if (this->eventHandler_.get() != nullptr) {
    this->eventHandler_->preRead(ctx, "UserLikesService.GetMovieLikesByIds");
  }

  UserLikesService_GetMovieLikesByIds_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != nullptr) {
    this->eventHandler_->postRead(ctx, "UserLikesService.GetMovieLikesByIds", bytes);
  }

  UserLikesService_GetMovieLikesByIds_result result;
  try {
    iface_->GetMovieLikesByIds(result.success, args.movie_ids);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != nullptr) {
      this->eventHandler_->handlerError(ctx, "UserLikesService.GetMovieLikesByIds");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("GetMovieLikesByIds", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != nullptr) {
    this->eventHandler_->preWrite(ctx, "UserLikesService.GetMovieLikesByIds");
  }

  oprot->writeMessageBegin("GetMovieLikesByIds", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != nullptr) {
    this->eventHandler_->postWrite(ctx, "UserLikesService.GetMovieLikesByIds", bytes);
  }
}

void UserLikesServiceProcessor::process_LikeDislikeMovie(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = nullptr;
  if (this->eventHandler_.get() != nullptr) {
    ctx = this->eventHandler_->getContext("UserLikesService.LikeDislikeMovie", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "UserLikesService.LikeDislikeMovie");

  if (this->eventHandler_.get() != nullptr) {
    this->eventHandler_->preRead(ctx, "UserLikesService.LikeDislikeMovie");
  }

  UserLikesService_LikeDislikeMovie_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != nullptr) {
    this->eventHandler_->postRead(ctx, "UserLikesService.LikeDislikeMovie", bytes);
  }

  UserLikesService_LikeDislikeMovie_result result;
  try {
    iface_->LikeDislikeMovie(args.user_id, args.movie_id, args.likeDislike);
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != nullptr) {
      this->eventHandler_->handlerError(ctx, "UserLikesService.LikeDislikeMovie");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("LikeDislikeMovie", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != nullptr) {
    this->eventHandler_->preWrite(ctx, "UserLikesService.LikeDislikeMovie");
  }

  oprot->writeMessageBegin("LikeDislikeMovie", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != nullptr) {
    this->eventHandler_->postWrite(ctx, "UserLikesService.LikeDislikeMovie", bytes);
  }
}

::std::shared_ptr< ::apache::thrift::TProcessor > UserLikesServiceProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< UserLikesServiceIfFactory > cleanup(handlerFactory_);
  ::std::shared_ptr< UserLikesServiceIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::std::shared_ptr< ::apache::thrift::TProcessor > processor(new UserLikesServiceProcessor(handler));
  return processor;
}

void UserLikesServiceConcurrentClient::GetMovieLikesByIds(std::vector<int64_t> & _return, const std::vector<std::string> & movie_ids)
{
  int32_t seqid = send_GetMovieLikesByIds(movie_ids);
  recv_GetMovieLikesByIds(_return, seqid);
}

int32_t UserLikesServiceConcurrentClient::send_GetMovieLikesByIds(const std::vector<std::string> & movie_ids)
{
  int32_t cseqid = this->sync_->generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(this->sync_.get());
  oprot_->writeMessageBegin("GetMovieLikesByIds", ::apache::thrift::protocol::T_CALL, cseqid);

  UserLikesService_GetMovieLikesByIds_pargs args;
  args.movie_ids = &movie_ids;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

void UserLikesServiceConcurrentClient::recv_GetMovieLikesByIds(std::vector<int64_t> & _return, const int32_t seqid)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(this->sync_.get(), seqid);

  while(true) {
    if(!this->sync_->getPending(fname, mtype, rseqid)) {
      iprot_->readMessageBegin(fname, mtype, rseqid);
    }
    if(seqid == rseqid) {
      if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
        ::apache::thrift::TApplicationException x;
        x.read(iprot_);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
        sentry.commit();
        throw x;
      }
      if (mtype != ::apache::thrift::protocol::T_REPLY) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
      }
      if (fname.compare("GetMovieLikesByIds") != 0) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      UserLikesService_GetMovieLikesByIds_presult result;
      result.success = &_return;
      result.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();

      if (result.__isset.success) {
        // _return pointer has now been filled
        sentry.commit();
        return;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "GetMovieLikesByIds failed: unknown result");
    }
    // seqid != rseqid
    this->sync_->updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_->waitForWork(seqid);
  } // end while(true)
}

void UserLikesServiceConcurrentClient::LikeDislikeMovie(const std::string& user_id, const std::string& movie_id, const bool likeDislike)
{
  int32_t seqid = send_LikeDislikeMovie(user_id, movie_id, likeDislike);
  recv_LikeDislikeMovie(seqid);
}

int32_t UserLikesServiceConcurrentClient::send_LikeDislikeMovie(const std::string& user_id, const std::string& movie_id, const bool likeDislike)
{
  int32_t cseqid = this->sync_->generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(this->sync_.get());
  oprot_->writeMessageBegin("LikeDislikeMovie", ::apache::thrift::protocol::T_CALL, cseqid);

  UserLikesService_LikeDislikeMovie_pargs args;
  args.user_id = &user_id;
  args.movie_id = &movie_id;
  args.likeDislike = &likeDislike;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

void UserLikesServiceConcurrentClient::recv_LikeDislikeMovie(const int32_t seqid)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(this->sync_.get(), seqid);

  while(true) {
    if(!this->sync_->getPending(fname, mtype, rseqid)) {
      iprot_->readMessageBegin(fname, mtype, rseqid);
    }
    if(seqid == rseqid) {
      if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
        ::apache::thrift::TApplicationException x;
        x.read(iprot_);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
        sentry.commit();
        throw x;
      }
      if (mtype != ::apache::thrift::protocol::T_REPLY) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
      }
      if (fname.compare("LikeDislikeMovie") != 0) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      UserLikesService_LikeDislikeMovie_presult result;
      result.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();

      sentry.commit();
      return;
    }
    // seqid != rseqid
    this->sync_->updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_->waitForWork(seqid);
  } // end while(true)
}

} // namespace
