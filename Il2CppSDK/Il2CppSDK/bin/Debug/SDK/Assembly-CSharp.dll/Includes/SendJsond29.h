#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendJsond29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SendJson>d__29"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& t__builder() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = BugReportWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& json() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& url() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = UnityCommonLogger*> R& logger() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& request5__2() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppObject*> R& u__1() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R MoveNext() {
		return ((R (*)(SendJsond29*))(Il2CppBase() + 0xEEE400))(this);
	}
	template <typename R = void> R SetStateMachine(uintptr_t stateMachine) {
		return ((R (*)(SendJsond29*, uintptr_t))(Il2CppBase() + 0xEEEB94))(this, stateMachine);
	}

};

