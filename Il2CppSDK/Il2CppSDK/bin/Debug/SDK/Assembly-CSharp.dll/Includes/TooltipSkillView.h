#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TooltipSkillView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TooltipSkillView"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Rarities() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& DescriptionMaxLength() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DescriptionMaxLengthByLanguage() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = int32_t> T GetDescriptionMaxLength(uintptr_t language) {
		return ((T (*)(TooltipSkillView*, uintptr_t))(Il2CppBase() + 0x14F5F70))(this, language);
	}

};

