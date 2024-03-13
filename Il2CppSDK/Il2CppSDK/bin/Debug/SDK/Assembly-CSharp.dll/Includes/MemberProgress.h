#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MemberProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MemberProgress"));
	}

	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> static T ArraysAreEqual(Il2CppArray<uintptr_t>* arr1, Il2CppArray<uintptr_t>* arr2) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12CD598))(0, arr1, arr2);
	}
	template <typename T = bool> T Equals(MemberProgress* other) {
		return ((T (*)(MemberProgress*, MemberProgress*))(Il2CppBase() + 0x12CD680))(this, other);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MemberProgress*, uintptr_t))(Il2CppBase() + 0x12CD6EC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MemberProgress*, uintptr_t))(Il2CppBase() + 0x12CD7E0))(this, writer);
	}

};

