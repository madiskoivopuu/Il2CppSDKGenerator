#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BlueprintLearnedWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintLearnedWindow"));
	}

	template <typename R = uintptr_t> R& LearnedBlueprintImage() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& LearnedBlueprintName() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& OkBtn() {
		return *(R*)((uintptr_t)this + 0x90);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(BlueprintLearnedWindow*))(Il2CppBase() + 0x16C18F4))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(BlueprintLearnedWindow*))(Il2CppBase() + 0x16C19D4))(this);
	}
	template <typename R = void> R SendLearnBlueprint() {
		return ((R (*)(BlueprintLearnedWindow*))(Il2CppBase() + 0x16C1C9C))(this);
	}

};

