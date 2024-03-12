#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TemporaryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TemporaryComponent"));
	}

	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& OBTStartTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& OBTEndTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& QAStartTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& QAEndTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Cyclic() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TemporaryComponent*, uintptr_t))(Il2CppBase() + 0x16B5B90))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TemporaryComponent*, uintptr_t))(Il2CppBase() + 0x16B5C5C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TemporaryComponent*, uintptr_t))(Il2CppBase() + 0x16B5DBC))(this, writer);
	}
	template <typename T = int64_t> T GetStartTime(bool isCyclic, bool isQA, bool isOBT) {
		return ((T (*)(TemporaryComponent*, bool, bool, bool))(Il2CppBase() + 0x16B5E50))(this, isCyclic, isQA, isOBT);
	}
	template <typename T = int64_t> T GetEndTime(bool isCyclic, bool isQA, bool isOBT) {
		return ((T (*)(TemporaryComponent*, bool, bool, bool))(Il2CppBase() + 0x16B5EBC))(this, isCyclic, isQA, isOBT);
	}

};

}
