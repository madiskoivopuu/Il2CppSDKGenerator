#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendDatad30
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SendData>d__30"));
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
	template <typename R = Il2CppArray<uint8_t>*> R& logData() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& fileName() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& url() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = UnityCommonLogger*> R& logger() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& responseString5__2() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& request5__3() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 TaskAwaiter1<uintptr_t>*& u__1() {
		return *(TaskAwaiter1<uintptr_t>**)((uintptr_t)this + 0x68);
	}
	 TaskAwaiter1<Il2CppString*>*& u__2() {
		return *(TaskAwaiter1<Il2CppString*>**)((uintptr_t)this + 0x70);
	}

	template <typename R = void> R MoveNext() {
		return ((R (*)(SendDatad30*))(Il2CppBase() + 0xEED5E8))(this);
	}
	template <typename R = void> R SetStateMachine(uintptr_t stateMachine) {
		return ((R (*)(SendDatad30*, uintptr_t))(Il2CppBase() + 0xEEE3F4))(this, stateMachine);
	}

};

