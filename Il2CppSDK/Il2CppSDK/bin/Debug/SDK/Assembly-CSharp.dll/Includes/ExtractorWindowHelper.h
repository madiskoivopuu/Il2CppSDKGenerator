#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtractorWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractorWindowHelper"));
	}


	template <typename T = ExtractorWindow*> static T ShowExtractor(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1691C2C))(0, manager, targetId);
	}
	template <typename T = void> static T CloseExtractor(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1691CF8))(0, manager, targetId);
	}

};

