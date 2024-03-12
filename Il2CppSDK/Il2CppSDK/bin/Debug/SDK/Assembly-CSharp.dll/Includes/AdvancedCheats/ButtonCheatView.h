#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../AdvancedCheats/CheatView" 
namespace AdvancedCheats {

class ButtonCheatView: CheatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "ButtonCheatView"));
	}

	template <typename T = uintptr_t> T& onClickButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& parameterInputField() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& iconImage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& localizationNameText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rarities() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Bind(uintptr_t icon, Il2CppString* innerName, Il2CppString* localizationName, uintptr_t onclick, void* onclickWithParameter, void* captionGetter, int32_t rarity) {
		return ((T (*)(ButtonCheatView*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, void*, void*, int32_t))(Il2CppBase() + 0x15B1090))(this, icon, innerName, localizationName, onclick, onclickWithParameter, captionGetter, rarity);
	}
	template <typename T = void> T UnBind() {
		return ((T (*)(ButtonCheatView*))(Il2CppBase() + 0x15B1444))(this);
	}

};

}
