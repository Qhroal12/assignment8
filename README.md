# 1) 피보나치 수열

- 피보나치 수열을 정수 N에 대해 순환적 방법과 재귀적 방법으로 계산하는 코드를 각각 작성한다.

- 정수 N을 1부터 차례로 늘려가며 각각의 방법에 대한 수행시간을 프로파일링해본다.

- 결과를 그래프 + 표 등을 포함한 마크다운 문서로 작성하여 깃허브에 등록하고, 링크를 제출한다.

- 마크다운 문서에는 각각의 방법에 대한 분석, 비교 등을 포함한다.

- 피보나치 수열의 값은 F(1)=1, F(2)=1, F(3)=2... 로 정의한다.


<img width="317" height="118" alt="1" src="https://github.com/user-attachments/assets/38977e2f-6911-4de6-8a54-7eb62bafa60b" />
<img width="317" height="114" alt="2" src="https://github.com/user-attachments/assets/d86d46b7-a440-4e97-b17c-bfd11bba88f8" />
<img width="317" height="113" alt="3" src="https://github.com/user-attachments/assets/986e8233-08b5-49d5-8e9a-8cf9716ac00e" />
<img width="317" height="108" alt="4" src="https://github.com/user-attachments/assets/bccaf049-aefe-45f7-8158-096b8be23a2c" />
<img width="320" height="122" alt="5" src="https://github.com/user-attachments/assets/989c1a31-005d-47a2-ae3a-b5ab48fc6f20" />

위 사진은 반복문을 사용했을 때 소요된 피보나치 함수의 시간이다. 이를 그래프로 나타내면 

<img width="1536" height="960" alt="GRAPH_1" src="https://github.com/user-attachments/assets/84059b32-590e-486f-b565-4c800a29ff87" />
이런 직선 모양의 그래프가 나오게 된다.

즉, 반복문을 사용했을 때엔 피보나치 함수는 N이 커짐에 따라 그에 대한 시간도 일정하게 비례하여 올라가는 y=x꼴의 함수 형식이라고 볼 수 있다.

<img width="319" height="122" alt="25" src="https://github.com/user-attachments/assets/8252a80b-5ab0-47d1-9d32-37182ee00f38" />
<img width="322" height="118" alt="30" src="https://github.com/user-attachments/assets/85753310-f3f0-4ad0-ba05-45e70350bd71" />
<img width="320" height="92" alt="35" src="https://github.com/user-attachments/assets/4281cdd3-1a7c-4a4d-b3d7-cab2105e4976" />
<img width="322" height="116" alt="40" src="https://github.com/user-attachments/assets/844f87e1-1c62-45d3-9435-92c1898ad5ae" />
<img width="325" height="109" alt="45" src="https://github.com/user-attachments/assets/d3b476ca-febe-4d36-918c-2a30a7f4a728" />

다음은 재귀함수를 호출하였을 때 소요된 피보나치 함수의 시간이다. 이를 그래프로 나타내면

<img width="1536" height="960" alt="GRAPH_2" src="https://github.com/user-attachments/assets/f68b43eb-3af4-494e-a6d0-42756e4e2917" />
이런 곡선 모양의 그래프가 나오게 된다.

반복문을 사용했을 때와는 달리 입력받은 수의 크기와 시간을 비교 하였을 때 그 수가 지수적으로 증가하는 것을 알 수 있다.

즉, 재귀함수를 사용했을 때엔 피보나치 함수는 N이 커짐에 따라 그에 대한 시간이 지수적으로 올라가는 y=2^n꼴의 함수 형식이라고 볼 수 있다.
