#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHideEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHideEntity"));
	}


	template <typename R = HideComponent*> R get_hide() {
		return ((R (*)(IHideEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHide() {
		return ((R (*)(IHideEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHide(HIDEFLAG* newFlag) {
		return ((R (*)(IHideEntity*, HIDEFLAG*))(Il2CppBase() + 0x0))(this, newFlag);
	}
	template <typename R = void> R ReplaceHide(HIDEFLAG* newFlag) {
		return ((R (*)(IHideEntity*, HIDEFLAG*))(Il2CppBase() + 0x0))(this, newFlag);
	}
	template <typename R = void> R RemoveHide() {
		return ((R (*)(IHideEntity*))(Il2CppBase() + 0x0))(this);
	}

};

