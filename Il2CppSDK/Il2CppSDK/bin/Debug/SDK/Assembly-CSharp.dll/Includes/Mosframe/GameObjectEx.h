#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mosframe {

class GameObjectEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "GameObjectEx"));
	}


	template <typename R = void> static R setLayer(uintptr_t self, int32_t layer, bool includeChildren) {
		return ((R (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x176CCBC))(0, self, layer, includeChildren);
	}

};

}