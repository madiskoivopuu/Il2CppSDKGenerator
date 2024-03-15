#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass480
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass48_0"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& userIds() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Action1<Il2CppArray<uintptr_t>*>*& callback() {
		return *(Action1<Il2CppArray<uintptr_t>*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& users() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& count() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppObject*> R& countLock() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& resultCount() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Action1<uintptr_t>*& 9__0() {
		return *(Action1<uintptr_t>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R LoadUsersb__0(uintptr_t annotatedData) {
		return ((R (*)(cDisplayClass480*, uintptr_t))(Il2CppBase() + 0x113D530))(this, annotatedData);
	}

};

