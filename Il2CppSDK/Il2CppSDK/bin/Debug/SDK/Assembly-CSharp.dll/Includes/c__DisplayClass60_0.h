#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass600
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass60_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& token() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T LoadMoreScoresb__0(uintptr_t annotatedData) {
		return ((T (*)(cDisplayClass600*, uintptr_t))(Il2CppBase() + 0x113FA40))(this, annotatedData);
	}
	template <typename T = void> T LoadMoreScoresb__1(uintptr_t exception) {
		return ((T (*)(cDisplayClass600*, uintptr_t))(Il2CppBase() + 0x113FE70))(this, exception);
	}

};

}
