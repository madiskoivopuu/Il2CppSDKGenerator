#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass61
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass6_1"));
	}

	template <typename R = ActQuestViewNew*> R& questView() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass60*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R UpdateViewb__2() {
		return ((R (*)(cDisplayClass61*))(Il2CppBase() + 0x10BEA94))(this);
	}
	template <typename R = void> R UpdateViewb__3() {
		return ((R (*)(cDisplayClass61*))(Il2CppBase() + 0x10BEAC4))(this);
	}

};

