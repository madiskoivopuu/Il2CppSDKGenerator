#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendDatad10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SendData>d__10"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& t__builder() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = uintptr_t> R& request() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& key() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& address() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& cmd() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& response() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Action1<uintptr_t>*& responseHandler() {
		return *(Action1<uintptr_t>**)((uintptr_t)this + 0x48);
	}
	 Action1<ProtoTools::ErrorCodes>*& onError() {
		return *(Action1<ProtoTools::ErrorCodes>**)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& client5__2() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = double> R& start5__3() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 TaskAwaiter1<uintptr_t>*& u__1() {
		return *(TaskAwaiter1<uintptr_t>**)((uintptr_t)this + 0x68);
	}
	 TaskAwaiter1<Il2CppArray<uint8_t>*>*& u__2() {
		return *(TaskAwaiter1<Il2CppArray<uint8_t>*>**)((uintptr_t)this + 0x70);
	}

	template <typename R = void> R MoveNext() {
		return ((R (*)(SendDatad10*))(Il2CppBase() + 0x10C6898))(this);
	}
	template <typename R = void> R SetStateMachine(uintptr_t stateMachine) {
		return ((R (*)(SendDatad10*, uintptr_t))(Il2CppBase() + 0x10C7668))(this, stateMachine);
	}

};

