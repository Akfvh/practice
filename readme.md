#  연습용 레포지토리
### 목적

- github 접속
> github에 더 자주 접속해서 다른 사람들의 레포지토리를 보고  
> 레포지토리 관리 관습을 익히고 여러 프로젝트를 접한다.


- git 명령어 연습
> github 관리 및 추후 협업을 위한 명령어 연습


- 마크다운 문법 익히기
> TIL 이나 개발 일지 등의 작성을 위해 활용할 `velog` 혹은 `notion`의 수월한 작성을 위한 `markdown` 문법 익히기

### 계기
>말하는 감자

해당 레포지토리를 만들게 된 가장 큰 계기는 동아리 지원을 위한 github 페이지 개설이다. 아직 개인적으로 진행한 프로젝트가 없기에, 비어있는 github 레포지토리가 부끄러워 `컴퓨터 공학 및 실습1`강의에서 진행했던 프로젝트 일부라도 올려보고자 레포지토리를 만들고자 했으나, 문제에 직면했다.

>git push

`컴퓨터 공학 및 실습` 강의에서 간단한 실습으로 `git` 명령어를 통한 init, add, commit, push의 경험이 있기에 해당 절차를 그대로 진행했으나, 전 과 달리 `git push` 후에 바로 github 레포지토리에 반영되지 않고, `master`branch에서 compare&pull request만 생성되었다. 해결을 위한 구글링 중 [블로그](https://waaan.tistory.com/13)를 발견했다.

>readme.md

github에서 레포지토리 생성 시 체크할 수 있는  `initiailize repo with a README`옵션을 통해 생성했기에 발생하는 오류였다.  
간략히 정리하자면  
- 해당 옵션 사용 시 생성되는 `readme.md`파일 생성 역시 커밋으로 간주
- `git init`을 통해 생성된 로컬 레포지토리에서 처음 `git push`시 해당 커밋과 충돌
- 위 블로그의 경우엔 에러 발생
- 내 경우엔 커밋 간 merge를 위한 pull request 발생

해결책은 세가지였다  
1. github 레포지토리 생성 시 해당 옵션 체크 없이 생성
2. readme가 존재하는 github레포지토리를 이미 생성한 경우
	- `git init`이 아닌, `git clone`을 통해 로컬 레포지토리 생성
	- 이미 `git init`을 통해 로컬 레포지토리를 생성했을 시
	-- git push -f origin master (강제 푸시)
	-- git pull origin master --> git push  --set-upstream origin master  
	-> 원격 레포지토리 pull 후 다시 push

### 결론 
>"오히려 좋아"

어쩌다보니 글이 길어졌지만, 요약하자면  
-- 동아리 지원을 위해 github 레포지토리를 생성하려했다.
-- 해당 과정에서 문제를 직면했다.
-- 해당 레포지토리는 위 문제를 해결하기 위해 이것저것 시도해보기 위해 만든 레포지토리이다.
-- 위 해결책 중 1번 방법을 사용했고, 현재 마크다운 문법을 열심히 찾아가며 `vi 에디터`에서 해당 `readme`를 작성중이다.

동아리에 합격할 지는 모르겠지만, 결과가 어떻게 되더라도 항상 미루던 github 레포지토리 관리 및 마크다운 문법 연습을 시작하게 된 건 정말 긍정적인 성과라고 할 수 있겠다. 

해당 레포지토리는 git 명령어 연습과 마크다운 문법 연습을 위해 느낀점 등이 계속 추가되고 수정될 것이다. 특히 새로운 마크다운 문법을 배울 때 마다 연습해 볼 것 같다. 일종의 작은 `TIL`이랄까  
 
이런 연습이 학기 중 전공 수업 `TIL`이나 동아리 합격 시 진행할 프로젝트 관련 개발일지, 그리고 협업을 위한 github이용에 도움이 되면 좋겠다.

+) 쓰면서 느꼈는데 README를 이렇게 주저리주저리 쓰는 건 역시 아닌 것 같다. 프로그래밍에도 어느정도 관습이 있는 것 처럼, 앞으로 진행할 프로젝트들을 위해 여러 레포지토리를 방문하며 README 작성 관습도 익혀야겠다.
