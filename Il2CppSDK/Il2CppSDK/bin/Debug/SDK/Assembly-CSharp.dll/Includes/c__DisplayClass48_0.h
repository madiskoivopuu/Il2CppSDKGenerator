#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass480
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass48_0"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& userIds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& users() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& countLock() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& resultCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& 9__0() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T LoadUsersb__0(uintptr_t annotatedData) {
		return ((T (*)(cDisplayClass480*, uintptr_t))(Il2CppBase() + 0x113D530))(this, annotatedData);
	}

};

}
