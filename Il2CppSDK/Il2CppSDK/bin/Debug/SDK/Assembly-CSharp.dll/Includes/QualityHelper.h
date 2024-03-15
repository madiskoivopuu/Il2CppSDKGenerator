#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QualityHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QualityHelper"));
	}

	template <typename R = Il2CppArray<QualityVariant*>*> R& LowVariants() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<QualityVariant*>*> R& MediumVariants() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<QualityVariant*>*> R& HighVariants() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(QualityHelper*))(Il2CppBase() + 0x11C5CB4))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(QualityHelper*))(Il2CppBase() + 0x11C5DB0))(this);
	}
	template <typename R = void> R OnQualityChanged(int32_t quality) {
		return ((R (*)(QualityHelper*, int32_t))(Il2CppBase() + 0x11C5EAC))(this, quality);
	}
	template <typename R = void> R ApplyVariant(Il2CppArray<QualityVariant*>* variants) {
		return ((R (*)(QualityHelper*, Il2CppArray<QualityVariant*>*))(Il2CppBase() + 0x11C5EDC))(this, variants);
	}

};

