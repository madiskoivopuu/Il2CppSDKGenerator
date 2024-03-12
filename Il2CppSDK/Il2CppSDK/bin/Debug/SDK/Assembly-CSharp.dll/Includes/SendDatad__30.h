#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendDatad30
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SendData>d__30"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& json() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& logData() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& fileName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& logger() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& responseString5__2() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& request5__3() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(SendDatad30*))(Il2CppBase() + 0xEED5E8))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(SendDatad30*, uintptr_t))(Il2CppBase() + 0xEEE3F4))(this, stateMachine);
	}

};

}
