#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MemberProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MemberProgress"));
	}

	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Progress() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& PlayerName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Rank() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = bool> static R ArraysAreEqual(Il2CppArray<MemberProgress*>* arr1, Il2CppArray<MemberProgress*>* arr2) {
		return ((R (*)(void *, Il2CppArray<MemberProgress*>*, Il2CppArray<MemberProgress*>*))(Il2CppBase() + 0x12CD598))(0, arr1, arr2);
	}
	template <typename R = bool> R Equals(MemberProgress* other) {
		return ((R (*)(MemberProgress*, MemberProgress*))(Il2CppBase() + 0x12CD680))(this, other);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MemberProgress*, uintptr_t))(Il2CppBase() + 0x12CD6EC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MemberProgress*, uintptr_t))(Il2CppBase() + 0x12CD7E0))(this, writer);
	}

};

