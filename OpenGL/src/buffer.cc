#include "buffer.h"


const string kDebugTag = "[Buffer] ";

Buffer::Buffer()
  : id(-1),
    type(-1) {
}

Buffer::Buffer(GLenum t)
  : type(t) {
  glGenBuffers(1, &id);
}

Buffer::~Buffer() {
}

bool Buffer::setupWithData(GLvoid* data, GLsizeiptr length, GLenum usage) {
  glBindBuffer(type, id);
  glBufferData(type, length, data, usage);
  return true;
}
