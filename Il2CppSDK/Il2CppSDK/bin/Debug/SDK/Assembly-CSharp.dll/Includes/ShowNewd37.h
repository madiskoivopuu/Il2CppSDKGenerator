#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowNewd37
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowNew>d__37"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& t__builder() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = ManualQuestTrackerView*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Action1<Content1<Data*>*>*& onComplete() {
		return *(Action1<Content1<Data*>*>**)((uintptr_t)this + 0x30);
	}
	 TaskAwaiter1<IAwaitable1<Il2CppString*>*>*& u__1() {
		return *(TaskAwaiter1<IAwaitable1<Il2CppString*>*>**)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R MoveNext() {
		return ((R (*)(ShowNewd37*))(Il2CppBase() + 0x116477C))(this);
	}
	template <typename R = void> R SetStateMachine(uintptr_t stateMachine) {
		return ((R (*)(ShowNewd37*, uintptr_t))(Il2CppBase() + 0x1164A7C))(this, stateMachine);
	}

};

