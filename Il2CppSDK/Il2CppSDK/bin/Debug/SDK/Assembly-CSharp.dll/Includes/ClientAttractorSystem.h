#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientAttractorSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientAttractorSystem"));
	}

	 IGroup1<MagicEntity*>*& _targetMagics() {
		return *(IGroup1<MagicEntity*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = ICommonClientContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ClientAttractorSystem*))(Il2CppBase() + 0x19120C8))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ClientAttractorSystem*))(Il2CppBase() + 0x1912284))(this);
	}

};

