#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CutsceneWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CutsceneWindowHelper"));
	}


	template <typename R = CutsceneWindow*> static R ShowCutscene(UIWindowsManager* manager, Il2CppString* sceneName, int32_t variantIndex) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x163F8E0))(0, manager, sceneName, variantIndex);
	}

};

