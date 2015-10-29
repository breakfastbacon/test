#include <bandit.h>
#include <function.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

using namespace bandit;

go_bandit([] {
  describe("function", [] {

    it("works", [] {
      AssertThat(func(), Equals(true));
    });

    it("file", [] {
      int fd = open("foobar.txt", O_RDWR | O_CREAT, 0777);
      close(fd);
      AssertThat(fd, IsGreaterThan(-1));
    });
  });
});

int main(int argc, char *argv[]) {
  return bandit::run(argc, argv);
}