#  연습용 레포지토리
### 목적
<br>

- github 접속  

github에 더 자주 접속해서 다른 사람들의 레포지토리를 보고  
레포지토리 관리 관습을 익히고 여러 프로젝트를 접한다.  
<br>

- git 명령어 연습  

github 관리 및 추후 협업을 위한 명령어 연습  
<br>

- 마크다운 문법 익히기

TIL 이나 개발 일지 등의 작성을 위해 활용할 `velog` 혹은 `notion`의 수월한 작성을 위한 `markdown` 문법 익히기  
<br><br>

### 계기

레포지토리 구성 중 문제에 직면
<br><br>

>"git push"

`컴퓨터 공학 및 실습1` 강의에서 간단한 실습으로 `git` 명령어를 통한 init, add, commit, push의 경험이 있기에 해당 절차를 그대로 진행했으나, 전 과 달리 `git push` 후에 바로 github 레포지토리에 반영되지 않고, `master`branch에서 compare&pull request만 생성되었다. 해결을 위한 구글링 중 [블로그](https://waaan.tistory.com/13)를 발견했다.
<br><br>

>"readme.md"

github에서 레포지토리 생성 시 체크할 수 있는  `initiailize repo with a README`옵션을 통해 생성했기에 발생하는 오류였다.  
간략히 정리하자면  
- 해당 옵션 사용 시 생성되는 `readme.md`파일 생성 역시 커밋으로 간주
- `git init`을 통해 생성된 로컬 레포지토리에서 처음 `git push`시 해당 커밋과 충돌
- 위 블로그의 경우엔 에러 발생
- 내 경우엔 커밋 간 merge를 위한 pull request 발생
<br>


### 해결
해결책은 세가지였다  
1. github 레포지토리 생성 시 해당 옵션 체크 없이 생성

2. readme가 존재하는 github레포지토리를 이미 생성한 경우
	- `git init`이 아닌, `git clone`을 통해 로컬 레포지토리 생성
	- 이미 `git init`을 통해 로컬 레포지토리를 생성했을 시  
		- git push -f origin master (강제 푸시)  
		- git pull origin master --> git push  --set-upstream origin master  
	-> 원격 레포지토리 pull 후 다시 push
<br>



### 정리 


- 동아리 지원을 위해 github 레포지토리를 생성 중 문제를 직면했다.
- 해당 레포지토리는 위 문제를 해결하기 위해 이것저것 시도해보기 위해 만든 레포지토리이다.
- 위 해결책 중 1번 방법을 사용했고, 현재 마크다운 문법을 열심히 찾아가며 `vi editor`에서 해당 `readme`를 작성중이다.

+) `마크다운`언어를 사용해 글을 작성할 때 `vi editor`는 preview가 없어서 너무 힘들었다. 최근에는 preview가 가능한 `vscode`를 사용해서 readme를 작성하고있다.

+) 개인적으로 `vi editor`를 좋아해서, preview가 가능한 vi editor 플러그인을 찾아봐야겠다.


해당 레포지토리는 git 명령어 연습과 마크다운 문법 연습을 위해 느낀점 등이 계속 추가되고 수정될 것이다. 특히 새로운 마크다운 문법을 배울 때 마다 연습해 볼 것 같다. 일종의 작은 `TIL`이랄까  
 
이런 연습이 학기 중 전공 수업 `TIL`이나 동아리 합격 시 진행할 프로젝트 관련 개발일지, 그리고 협업을 위한 github이용에 도움이 되면 좋겠다.


