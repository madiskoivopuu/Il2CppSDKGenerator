#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeTypeJsonConverter1.h" 

class WorldStatusJsonConverter : public TypeTypeJsonConverter1<WorldStatusType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldStatusJsonConverter"));
	}



};

