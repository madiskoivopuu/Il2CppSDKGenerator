#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadDatad11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadData>d__11"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& key() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& address() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& cmd() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& responseHandler() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& onError() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& client5__2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = double> T& start5__3() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(LoadDatad11*))(Il2CppBase() + 0x10C6008))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(LoadDatad11*, uintptr_t))(Il2CppBase() + 0x10C688C))(this, stateMachine);
	}

};

}
