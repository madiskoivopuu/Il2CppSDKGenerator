#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConvertedToItemsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConvertedToItemsWindowHelper"));
	}


	template <typename T = ConvertedToItemsWindow*> static T ShowConvertedToItemsWindow(UIWindowsManager* manager, int64_t messageId, Il2CppString* windowData) {
		return ((T (*)(void *, UIWindowsManager*, int64_t, Il2CppString*))(Il2CppBase() + 0x15F4324))(0, manager, messageId, windowData);
	}

};

