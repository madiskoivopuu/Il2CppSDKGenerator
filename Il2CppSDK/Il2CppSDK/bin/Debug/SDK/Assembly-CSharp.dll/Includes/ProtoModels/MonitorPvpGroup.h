#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MonitorPvpGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MonitorPvpGroup"));
	}

	 static MessageParser1ProtoModels::MonitorPvpGroup*>*& _parser() {
		return *(MessageParser1ProtoModels::MonitorPvpGroup*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& id_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ClansFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::MonitorPvpClanInfo*>*& _repeated_clans_codec() {
		return *(FieldCodec1ProtoModels::MonitorPvpClanInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::MonitorPvpClanInfo*>*& clans_() {
		return *(RepeatedField1ProtoModels::MonitorPvpClanInfo*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PvpWindowFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& pvpWindow_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& SizeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& size_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& LanguageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& language_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& StartTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& startTime_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& EndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTime_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& IsFakeGroupFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isFakeGroup_() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	 static MessageParser1ProtoModels::MonitorPvpGroup*>* get_Parser() {
		return ((MessageParser1ProtoModels::MonitorPvpGroup*>* (*)(void *))(Il2CppBase() + 0x1EA7AAC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1EA7B10))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7C30))(this);
	}
	template <typename R = ProtoModels::MonitorPvpGroup*> R Clone() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7DD4))(this);
	}
	template <typename R = int64_t> R get_Id() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E30))(this);
	}
	template <typename R = void> R set_Id(int64_t value) {
		return ((R (*)(MonitorPvpGroup*, int64_t))(Il2CppBase() + 0x1EA7E38))(this, value);
	}
	 RepeatedField1ProtoModels::MonitorPvpClanInfo*>* get_Clans() {
		return ((RepeatedField1ProtoModels::MonitorPvpClanInfo*>* (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E40))(this);
	}
	template <typename R = int32_t> R get_PvpWindow() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E48))(this);
	}
	template <typename R = void> R set_PvpWindow(int32_t value) {
		return ((R (*)(MonitorPvpGroup*, int32_t))(Il2CppBase() + 0x1EA7E50))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E58))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(MonitorPvpGroup*, int32_t))(Il2CppBase() + 0x1EA7E60))(this, value);
	}
	template <typename R = int32_t> R get_Size() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E68))(this);
	}
	template <typename R = void> R set_Size(int32_t value) {
		return ((R (*)(MonitorPvpGroup*, int32_t))(Il2CppBase() + 0x1EA7E70))(this, value);
	}
	template <typename R = int32_t> R get_Language() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E78))(this);
	}
	template <typename R = void> R set_Language(int32_t value) {
		return ((R (*)(MonitorPvpGroup*, int32_t))(Il2CppBase() + 0x1EA7E80))(this, value);
	}
	template <typename R = int64_t> R get_StartTime() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E88))(this);
	}
	template <typename R = void> R set_StartTime(int64_t value) {
		return ((R (*)(MonitorPvpGroup*, int64_t))(Il2CppBase() + 0x1EA7E90))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7E98))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(MonitorPvpGroup*, int64_t))(Il2CppBase() + 0x1EA7EA0))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7EA8))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(MonitorPvpGroup*, int64_t))(Il2CppBase() + 0x1EA7EB0))(this, value);
	}
	template <typename R = bool> R get_IsFakeGroup() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA7EB8))(this);
	}
	template <typename R = void> R set_IsFakeGroup(bool value) {
		return ((R (*)(MonitorPvpGroup*, bool))(Il2CppBase() + 0x1EA7EC0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MonitorPvpGroup*, Il2CppObject*))(Il2CppBase() + 0x1EA7ECC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MonitorPvpGroup* other) {
		return ((R (*)(MonitorPvpGroup*, ProtoModels::MonitorPvpGroup*))(Il2CppBase() + 0x1EA7F3C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA8060))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA81B8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MonitorPvpGroup*, uintptr_t))(Il2CppBase() + 0x1EA821C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MonitorPvpGroup*))(Il2CppBase() + 0x1EA8458))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MonitorPvpGroup* other) {
		return ((R (*)(MonitorPvpGroup*, ProtoModels::MonitorPvpGroup*))(Il2CppBase() + 0x1EA86F8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MonitorPvpGroup*, uintptr_t))(Il2CppBase() + 0x1EA87D0))(this, input);
	}

};

}
