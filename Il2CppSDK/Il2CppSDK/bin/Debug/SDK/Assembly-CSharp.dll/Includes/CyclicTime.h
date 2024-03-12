#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicTime"));
	}

	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& OBTStartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& OBTEndTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& QAStartTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& QAEndTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CyclicTime*, uintptr_t))(Il2CppBase() + 0x229EE40))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CyclicTime*, uintptr_t))(Il2CppBase() + 0x229EF8C))(this, writer);
	}

};

}
