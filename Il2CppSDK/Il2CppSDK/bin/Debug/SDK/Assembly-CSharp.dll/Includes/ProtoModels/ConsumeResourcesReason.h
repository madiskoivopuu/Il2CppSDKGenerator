#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ConsumeResourcesReason
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ConsumeResourcesReason"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ConsumeResourcesReason*> static T& CrrUnknown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ConsumeResourcesReason*> static T& CrrFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ConsumeResourcesReason*> static T& CrrPartial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
