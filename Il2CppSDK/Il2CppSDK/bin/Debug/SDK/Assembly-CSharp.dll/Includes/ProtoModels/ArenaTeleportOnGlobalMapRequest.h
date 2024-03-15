#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaTeleportOnGlobalMapRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaTeleportOnGlobalMapRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaTeleportOnGlobalMapRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaTeleportOnGlobalMapRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& DataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::TeleportInfoType*>*& _repeated_data_codec() {
		return *(FieldCodec1<ProtoModels::TeleportInfoType*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::TeleportInfoType*>*& data_() {
		return *(RepeatedField1<ProtoModels::TeleportInfoType*>**)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ArenaTeleportOnGlobalMapRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaTeleportOnGlobalMapRequest*>* (*)(void *))(Il2CppBase() + 0x272136C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x27213D0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x27214F0))(this);
	}
	template <typename R = ProtoModels::ArenaTeleportOnGlobalMapRequest*> R Clone() {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x2721650))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x27216AC))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*, int64_t))(Il2CppBase() + 0x27216B4))(this, value);
	}
	 RepeatedField1<ProtoModels::TeleportInfoType*>* get_Data() {
		return ((RepeatedField1<ProtoModels::TeleportInfoType*>* (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x27216BC))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*, Il2CppObject*))(Il2CppBase() + 0x27216C4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaTeleportOnGlobalMapRequest* other) {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*, ProtoModels::ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x2721734))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x27217D0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x2721838))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0x272189C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x2721968))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaTeleportOnGlobalMapRequest* other) {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*, ProtoModels::ArenaTeleportOnGlobalMapRequest*))(Il2CppBase() + 0x2721A4C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaTeleportOnGlobalMapRequest*, uintptr_t))(Il2CppBase() + 0x2721AD0))(this, input);
	}

};

}
