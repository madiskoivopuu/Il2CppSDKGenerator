#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIWindowsLayerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowsLayerHelper"));
	}


	template <typename R = IUIWindowsLayer*> static R CreateLayer(UIWindowsLayerType* type, UIWindowsManager* manager, uintptr_t pivot) {
		return ((R (*)(void *, UIWindowsLayerType*, UIWindowsManager*, uintptr_t))(Il2CppBase() + 0x153351C))(0, type, manager, pivot);
	}

};

