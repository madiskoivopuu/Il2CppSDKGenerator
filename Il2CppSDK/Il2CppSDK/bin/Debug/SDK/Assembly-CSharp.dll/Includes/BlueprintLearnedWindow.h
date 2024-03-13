#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BlueprintLearnedWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintLearnedWindow"));
	}

	template <typename T = uintptr_t> T& LearnedBlueprintImage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& LearnedBlueprintName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& OkBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BlueprintLearnedWindow*))(Il2CppBase() + 0x16C18F4))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(BlueprintLearnedWindow*))(Il2CppBase() + 0x16C19D4))(this);
	}
	template <typename T = void> T SendLearnBlueprint() {
		return ((T (*)(BlueprintLearnedWindow*))(Il2CppBase() + 0x16C1C9C))(this);
	}

};

