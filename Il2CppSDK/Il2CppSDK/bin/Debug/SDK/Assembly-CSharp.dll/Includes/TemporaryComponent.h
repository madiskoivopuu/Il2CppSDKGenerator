#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TemporaryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TemporaryComponent"));
	}

	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& EndTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& OBTStartTime() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& OBTEndTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int64_t> R& QAStartTime() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int64_t> R& QAEndTime() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = CyclicTime*> R& Cyclic() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TemporaryComponent*, Il2CppObject*))(Il2CppBase() + 0x16B5B90))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TemporaryComponent*, uintptr_t))(Il2CppBase() + 0x16B5C5C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TemporaryComponent*, uintptr_t))(Il2CppBase() + 0x16B5DBC))(this, writer);
	}
	template <typename R = int64_t> R GetStartTime(bool isCyclic, bool isQA, bool isOBT) {
		return ((R (*)(TemporaryComponent*, bool, bool, bool))(Il2CppBase() + 0x16B5E50))(this, isCyclic, isQA, isOBT);
	}
	template <typename R = int64_t> R GetEndTime(bool isCyclic, bool isQA, bool isOBT) {
		return ((R (*)(TemporaryComponent*, bool, bool, bool))(Il2CppBase() + 0x16B5EBC))(this, isCyclic, isQA, isOBT);
	}

};

