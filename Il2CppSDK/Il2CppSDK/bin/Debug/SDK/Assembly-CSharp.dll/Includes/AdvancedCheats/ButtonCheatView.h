#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../CheatView.h" 
namespace AdvancedCheats {

class ButtonCheatView : public CheatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "ButtonCheatView"));
	}

	template <typename R = uintptr_t> R& onClickButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& parameterInputField() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& iconImage() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& localizationNameText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& rarities() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Bind(Icon* icon, Il2CppString* innerName, Il2CppString* localizationName, uintptr_t onclick, Action1Il2CppString*>* onclickWithParameter, Func2Il2CppString*, Il2CppString*>* captionGetter, int32_t rarity) {
		return ((R (*)(ButtonCheatView*, Icon*, Il2CppString*, Il2CppString*, uintptr_t, Action1Il2CppString*>*, Func2Il2CppString*, Il2CppString*>*, int32_t))(Il2CppBase() + 0x15B1090))(this, icon, innerName, localizationName, onclick, onclickWithParameter, captionGetter, rarity);
	}
	template <typename R = void> R UnBind() {
		return ((R (*)(ButtonCheatView*))(Il2CppBase() + 0x15B1444))(this);
	}

};

}
