#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConvertedToItemsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConvertedToItemsWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowConvertedToItemsWindow(uintptr_t manager, int64_t messageId, Il2CppString* windowData) {
		return ((T (*)(void *, uintptr_t, int64_t, Il2CppString*))(Il2CppBase() + 0x15F4324))(0, manager, messageId, windowData);
	}

};

}
