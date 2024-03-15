#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IVipMagicEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IVipMagicEntity"));
	}


	template <typename R = VipMagicComponent*> R get_vipMagic() {
		return ((R (*)(IVipMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasVipMagic() {
		return ((R (*)(IVipMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddVipMagic(VipBonusType* newType) {
		return ((R (*)(IVipMagicEntity*, VipBonusType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceVipMagic(VipBonusType* newType) {
		return ((R (*)(IVipMagicEntity*, VipBonusType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveVipMagic() {
		return ((R (*)(IVipMagicEntity*))(Il2CppBase() + 0x0))(this);
	}

};

