#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ManualTrackProhibitionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualTrackProhibitionComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ManualTrackProhibitionComponent*, Il2CppObject*))(Il2CppBase() + 0x1267730))(this, target);
	}

};
