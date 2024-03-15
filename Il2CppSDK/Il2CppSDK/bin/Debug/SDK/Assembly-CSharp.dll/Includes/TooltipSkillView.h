#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TooltipSkillView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TooltipSkillView"));
	}

	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Rarities() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& DescriptionMaxLength() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<LanguageLength*>*> R& DescriptionMaxLengthByLanguage() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = int32_t> R GetDescriptionMaxLength(uintptr_t language) {
		return ((R (*)(TooltipSkillView*, uintptr_t))(Il2CppBase() + 0x14F5F70))(this, language);
	}

};

