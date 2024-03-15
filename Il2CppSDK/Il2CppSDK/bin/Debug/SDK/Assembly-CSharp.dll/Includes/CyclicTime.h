#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicTime"));
	}

	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& EndTime() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int64_t> R& OBTStartTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& OBTEndTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& QAStartTime() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& QAEndTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CyclicTime*, uintptr_t))(Il2CppBase() + 0x229EE40))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CyclicTime*, uintptr_t))(Il2CppBase() + 0x229EF8C))(this, writer);
	}

};

