#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StackComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StackComponentHelper"));
	}


	template <typename T = bool> static T IsEmtpyStack(IStackEntity* stackEntity) {
		return ((T (*)(void *, IStackEntity*))(Il2CppBase() + 0x14890C0))(0, stackEntity);
	}
	template <typename T = bool> static T ReplaceStackIfNeed(IStackEntity* stackEntity, Il2CppString* newResource, int32_t newCount, Nullable1int64_t>* newSignature) {
		return ((T (*)(void *, IStackEntity*, Il2CppString*, int32_t, Nullable1int64_t>*))(Il2CppBase() + 0x1489200))(0, stackEntity, newResource, newCount, newSignature);
	}

};

